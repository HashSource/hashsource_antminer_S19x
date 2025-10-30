int __fastcall sub_83FEC(_DWORD *a1, int a2, int a3)
{
  int *v3; // r3
  int v6; // r1
  int v7; // r3
  _BOOL4 v8; // r0
  int v9; // r5
  bool v10; // zf
  _BOOL4 v11; // r3
  int v12; // r3
  int v13; // r2
  int v15; // r1

  v3 = (int *)a1[1];
  v6 = v3[25];
  if ( (*(_DWORD *)(v6 + 48) & 8) == 0 )
  {
    v7 = *v3;
    v8 = v7 >= 772;
    if ( v7 == 0x10000 )
      v8 = 0;
    if ( v8 )
      goto LABEL_5;
  }
  if ( (unsigned int)(a1[26] - 1) <= 3 || a1[275] == 1 )
LABEL_5:
    v9 = sub_A62E0(a3);
  else
    v9 = (*(int (__fastcall **)(int))(v6 + 40))(a3);
  v10 = *a1 == 768;
  if ( *a1 == 768 )
    v10 = v9 == 70;
  v11 = v10;
  if ( v10 )
  {
    LOBYTE(v9) = 40;
  }
  else
  {
    if ( v9 < 0 )
      return -1;
    v11 = v9 != 0;
  }
  if ( (a1[10] & v11) == 0 )
  {
    if ( a2 == 2 )
    {
      v15 = a1[285];
      if ( v15 )
        sub_8DB08(a1[376], v15);
    }
    v12 = a1[31];
    *(_BYTE *)(v12 + 236) = a2;
    v13 = a1[31];
    *(_DWORD *)(v12 + 232) = 1;
    *(_BYTE *)(v13 + 237) = v9;
    if ( !sub_7D404((int)(a1 + 404)) )
      return (*(int (__fastcall **)(_DWORD *))(a1[1] + 64))(a1);
  }
  return -1;
}
