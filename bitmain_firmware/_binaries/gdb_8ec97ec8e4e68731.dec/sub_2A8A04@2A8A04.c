int __fastcall sub_2A8A04(int a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r6
  unsigned int v6; // r3
  int v7; // r8
  int result; // r0
  int v9; // r12
  int v10; // r0
  __int64 v11; // r2
  unsigned int v12; // lr
  unsigned int v13; // r8
  int v14; // r1
  int *v15; // r4
  int v16; // r0
  int v17; // r5

  v5 = a2;
  if ( a3 > 1 )
  {
    sub_2A6BBC("bfdio.c", 288);
  }
  else
  {
    if ( a2 )
      v6 = 0;
    else
      v6 = a3;
    if ( v6 )
      return 0;
  }
  v9 = *(_DWORD *)(a1 + 140);
  if ( !v9 || (*(_BYTE *)(v9 + 44) & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( (unsigned int)v5 == *(_QWORD *)(a1 + 24) )
        return 0;
      if ( v9 && (*(_BYTE *)(v9 + 44) & 1) == 0 )
        goto LABEL_12;
    }
LABEL_17:
    v11 = v5;
    goto LABEL_18;
  }
  if ( a3 )
    goto LABEL_17;
LABEL_12:
  v10 = a1;
  v11 = v5;
  do
  {
    v12 = *(_DWORD *)(v10 + 56);
    v13 = *(_DWORD *)(v10 + 60);
    v10 = v9;
    v11 += __PAIR64__(v13, v12);
    v9 = *(_DWORD *)(v9 + 140);
  }
  while ( v9 && (*(_BYTE *)(v9 + 44) & 1) == 0 );
LABEL_18:
  v14 = *(_DWORD *)(a1 + 12);
  if ( v14 )
  {
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, unsigned int))(v14 + 12))(
               a1,
               *(_DWORD *)(v14 + 12),
               v11,
               HIDWORD(v11),
               a3);
    v7 = result;
    if ( !result )
    {
      if ( a3 )
        v5 += *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v5;
      return result;
    }
  }
  else
  {
    v7 = -1;
  }
  v15 = _errno_location();
  v16 = a1;
  v17 = *v15;
  sub_2A890C(v16);
  if ( v17 == 22 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(18);
    return v7;
  }
  ((void (__fastcall *)(int))loc_2A6C48)(1);
  *v15 = v17;
  return v7;
}
