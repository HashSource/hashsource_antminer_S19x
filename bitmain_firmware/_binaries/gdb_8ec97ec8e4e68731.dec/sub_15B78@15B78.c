int __fastcall sub_15B78(int a1)
{
  int v1; // r0

  v1 = sub_94700(
         "ada-tasks.c",
         a1,
         "%s: Assertion `%s' failed.",
         "ada_task_info_s* VEC_ada_task_info_s_index(VEC_ada_task_info_s*, unsigned int, const char*, unsigned int)",
         "index");
  return sub_15BAC(v1);
}
