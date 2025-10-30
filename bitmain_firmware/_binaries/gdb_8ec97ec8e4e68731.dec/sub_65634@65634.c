int __fastcall sub_65634(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0

  if ( a3 )
    sub_946E0("-list-features should be passed no arguments");
  v3 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v3, 1);
  sub_2575E8(v3, 0, "frozen-varobjs");
  sub_2575E8(v3, 0, "pending-breakpoints");
  sub_2575E8(v3, 0, "thread-info");
  sub_2575E8(v3, 0, "data-read-memory-bytes");
  sub_2575E8(v3, 0, "breakpoint-notifications");
  sub_2575E8(v3, 0, "ada-task-info");
  sub_2575E8(v3, 0, "language-option");
  sub_2575E8(v3, 0, "info-gdb-mi-command");
  sub_2575E8(v3, 0, "undefined-command-error-code");
  sub_2575E8(v3, 0, "exec-run-start-option");
  v4 = ((int (__fastcall *)(int))loc_1577A4)(2);
  if ( ((int (__fastcall *)(int))loc_1578CC)(v4) )
    sub_2575E8(v3, 0, "python");
  return sub_25734C(v3, 1);
}
