int __fastcall sub_2444C4(int a1)
{
  sub_25A418(
    a1,
    "This GDB was configured as follows:\n   configure --host=%s --target=%s\n",
    "arm-buildroot-linux-gnueabihf",
    "arm-buildroot-linux-gnueabihf");
  sub_25A418(
    a1,
    "             --with-auto-load-dir=%s\n             --with-auto-load-safe-path=%s\n",
    "$debugdir:$datadir/auto-load",
    "$debugdir:$datadir/auto-load");
  sub_25A418(a1, "             --with-expat\n");
  sub_25A418(a1, "             --with-gdb-datadir=%s%s\n", "/usr/share/gdb", " (relocatable)");
  sub_25A418(a1, "             --with-jit-reader-dir=%s%s\n", "/usr/lib/gdb", " (relocatable)");
  sub_25A418(a1, "             --without-libunwind-ia64\n");
  sub_25A418(a1, "             --without-lzma\n");
  sub_25A418(a1, "             --without-guile\n");
  sub_25A418(a1, "             --with-separate-debug-dir=%s%s\n", "/usr/lib/debug", " (relocatable)");
  sub_25A418(a1, "             --without-babeltrace\n");
  return sub_25A418(
           a1,
           "\n"
           "(\"Relocatable\" means the directory can be moved with the GDB installation\n"
           "tree, and GDB will still find it.)\n");
}
