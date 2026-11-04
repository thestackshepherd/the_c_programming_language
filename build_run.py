"""Compile a C file with gcc and run the resulting a.out.

Usage: python build_run.py char.c
"""
import subprocess
import sys
from pathlib import Path


def main() -> int:
    if len(sys.argv) != 2:
        print(f"usage: python {Path(sys.argv[0]).name} <file.c>", file=sys.stderr)
        return 2

    source = Path(sys.argv[1])
    if not source.is_file():
        print(f"error: {source} not found", file=sys.stderr)
        return 2

    build = subprocess.run(["gcc", str(source)], check=False)
    if build.returncode != 0:
        return build.returncode

    return subprocess.run([str(Path("a.out").resolve())], check=False).returncode


if __name__ == "__main__":
    sys.exit(main())
