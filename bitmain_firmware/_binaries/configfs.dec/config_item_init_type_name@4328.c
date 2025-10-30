__int64 __fastcall config_item_init_type_name(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  config_item_set_name((char *)a1, "%s", a4, a5, a6, a7, a8, a9, a10, a11, a2);
  *(_QWORD *)(a1 + 64) = a3;
  *(_DWORD *)(a1 + 28) = 1;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  return a1 + 32;
}
