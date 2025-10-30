int __fastcall sub_CD0A8(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v8; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  sub_B294C(&v8, &v9, 0, a4);
  if ( (unsigned int)(sub_EAC84(v8) - 1087) <= 1 && v9 == -1 )
  {
    if ( sub_D954C(a1, 0, 0, 0, a6) )
      return 2;
    else
      return 0;
  }
  else
  {
    sub_D0048(16, 270, 102, "crypto/ec/ecx_meth.c", 517);
    return 0;
  }
}
