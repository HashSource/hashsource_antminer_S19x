int (__fastcall *__fastcall sub_40AD0(int *a1))(int)
{
  int (__fastcall *v1)(int); // r3
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int (__fastcall *v6)(int *, int *); // r2
  int v7; // r0
  int v8; // r3
  _BOOL4 v10; // r3
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v1 = *(int (__fastcall **)(int))(dword_472024 + 132);
  if ( !v1 )
    return v1;
  v11 = dword_4878EC;
  v12 = dword_4878F0;
  v13 = dword_4878F4;
  v3 = a1[1];
  v4 = a1[2];
  dword_4878EC = *a1;
  dword_4878F0 = v3;
  dword_4878F4 = v4;
  if ( v1(dword_472024) )
  {
    v5 = dword_472024;
    a1[11] = 3;
    v6 = *(int (__fastcall **)(int *, int *))(v5 + 144);
    if ( v6 )
    {
      v7 = v6(&dword_4899A0, a1 + 13);
      v8 = a1[11];
      a1[12] = v7;
      v1 = (int (__fastcall *)(int))(v8 == 3);
      dword_4878EC = v11;
      dword_4878F0 = v12;
      dword_4878F4 = v13;
      return v1;
    }
    v10 = 1;
    a1[12] = 0;
  }
  else
  {
    v10 = a1[11] == 3;
  }
  dword_4878EC = v11;
  dword_4878F0 = v12;
  dword_4878F4 = v13;
  return (int (__fastcall *)(int))v10;
}
