int __fastcall sub_291C8C(int a1, int a2)
{
  int v2; // r12
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int result; // r0
  int v8; // r2
  int v9; // [sp+4h] [bp-8h]

  if ( (int (*)())dword_48AAD0 == sub_291C8C )
  {
    if ( dword_48B6DC )
    {
      v9 = a2;
      sub_2924E0(a1);
      a2 = v9;
    }
    v8 = dword_470794;
    if ( a1 < 0 )
    {
      v8 = -dword_470794;
      dword_470794 = -dword_470794;
    }
    v5 = v8 + dword_48B6D4;
    dword_48B6D4 = v5;
    if ( v5 < 0 )
      v2 = 0;
    v4 = dword_48B6D8;
    if ( v5 < 0 )
    {
      v5 = v2;
      dword_48B6D4 = v2;
    }
  }
  else
  {
    v4 = dword_48AB0C;
    v5 = 0;
    dword_48B6D4 = 0;
    dword_48B6D8 = dword_48AB0C;
    dword_470790 = a1;
    dword_470794 = 1;
  }
  if ( v4 )
    v6 = dword_470790;
  else
    v6 = 36;
  result = sub_291B9C(v6, a2, v5);
  dword_48B6DC = result == 0;
  return result;
}
