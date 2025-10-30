int sub_407CC()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0

  dword_471C40 = (int)"multi-thread";
  dword_471C44 = (int)"multi-threaded child process.";
  dword_471C48 = (int)"Threads and pthreads support.";
  dword_471C64 = (int)sub_3EBF0;
  dword_471C74 = (int)sub_3F264;
  dword_471C6C = (int)sub_3EC48;
  dword_471D30 = (int)sub_3EBA4;
  dword_471D44 = (int)sub_3EAD8;
  dword_471D48 = (int)sub_3EA54;
  dword_471D74 = 3;
  dword_471D8C = 1;
  dword_471F1C = 3840;
  dword_471DBC = (int)&loc_3F0A0;
  dword_471D4C = (int)sub_3E49C;
  dword_471DD8 = (int)sub_3E6C0;
  dword_471D54 = (int)sub_3ED54;
  ((void (__fastcall *)(void *))loc_22ECB4)(&unk_471C3C);
  dword_471BF8 = sub_327254("$sdir:$pdir");
  sub_5373C(
    "libthread-db-search-path",
    4,
    &dword_471BF8,
    "Set search path for libthread_db.",
    "Show the current search path or libthread_db.",
    "This path is used to search for libthread_db to be loaded into gdb itself.\n"
    "Its value is a colon (':') separate list of directories to search.\n"
    "Setting the search path to an empty list resets it to its default value.",
    sub_3EA00,
    0,
    &dword_47475C,
    &dword_47474C);
  v0 = sub_53934(
         "libthread-db",
         11,
         &dword_471BF0,
         "Set libthread-db debugging.",
         "Show libthread-db debugging.",
         "When non-zero, libthread-db debugging is enabled.",
         0,
         sub_3EA44,
         &dword_474750,
         &dword_474748);
  v1 = sub_BA63C(v0);
  v2 = sub_BA66C();
  v3 = sub_535B8(
         "libthread-db",
         4,
         &dword_46AF70,
         "Enable or disable auto-loading of inferior specific libthread_db.",
         "Show whether auto-loading inferior specific libthread_db is enabled.",
         "If enabled, libthread_db will be searched in 'set libthread-db-search-path'\n"
         "locations to load libthread_db compatible with the inferior.\n"
         "Standard system libthread_db still gets loaded even with this option off.\n"
         "This options has security implications for untrusted inferiors.",
         0,
         sub_3EA34,
         v1,
         v2);
  v4 = sub_BA69C(v3);
  sub_53274(
    "libthread-db",
    5,
    sub_40150,
    "Print the list of loaded inferior specific libthread_db.\nUsage: info auto-load libthread-db",
    v4);
  sub_1B963C(sub_40110);
  return sub_1B9340(262332);
}
