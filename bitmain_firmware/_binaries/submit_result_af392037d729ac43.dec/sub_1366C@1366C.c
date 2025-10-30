int __fastcall sub_1366C(int a1, int a2, int a3)
{
  int v5; // r4
  const char *v6; // r1
  int v7; // r0
  _DWORD v9[19]; // [sp+0h] [bp-4Ch] BYREF

  v5 = a1;
  if ( a1 == stdin )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  sub_14D80(a3, v6);
  if ( v5 )
  {
    v7 = sub_12994((int)v9, (int)fgetc, a2, v5);
    v5 = 0;
    if ( !v7 )
    {
      v5 = sub_13510(v9, a2, a3);
      sub_131C8(v9);
    }
  }
  else
  {
    sub_128D8(a3, 0, 4, "wrong arguments");
  }
  return v5;
}
