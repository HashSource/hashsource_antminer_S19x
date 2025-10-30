int __fastcall sub_115624(int a1, int a2)
{
  int v4; // r0
  const char **v5; // r5
  int *v6; // r0
  int v7; // r1
  int v8; // r4
  const char *v9; // r6
  const char *v10; // r3
  const char **v12; // [sp+0h] [bp-8h] BYREF

  v4 = sub_1B240C(&v12, a2 - 1);
  v5 = v12;
  v6 = (int *)sub_242FC8(v4);
  v7 = a2;
  v8 = *v6;
  v9 = (const char *)sub_25AC8C(a1, v7);
  if ( v5 )
  {
    if ( dword_46D448 )
      v10 = (const char *)sub_21B3C4(v5);
    else
      v10 = *v5;
  }
  else
  {
    v10 = "???";
  }
  return sub_2594B0(v8, " %s(%s)", v9, v10);
}
