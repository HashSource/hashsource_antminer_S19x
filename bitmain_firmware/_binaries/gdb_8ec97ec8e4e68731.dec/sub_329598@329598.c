_DWORD *__fastcall sub_329598(_DWORD *result, int *a2, int *a3, int *a4)
{
  int v4; // r4
  int v5; // r5
  int *v6; // r7
  int *v7; // r6
  int v8; // r8
  int v9; // r12
  unsigned __int64 v10; // r2
  int v11; // r12
  __int64 v12; // r2
  int v13; // r1
  int v14; // r5
  bool v15; // zf
  _DWORD v16[2]; // [sp+4h] [bp-Ch] BYREF
  char v17; // [sp+Ch] [bp-4h]
  __int16 v18; // [sp+Eh] [bp-2h]

  v4 = (int)result;
  v5 = (int)a2;
  v6 = a3;
  v7 = a4;
  v8 = result[1];
  v9 = a2[2] - *result + 1;
  if ( v8 > v9 )
  {
    LODWORD(v10) = *a3;
  }
  else
  {
    if ( v8 < v9 )
      return (_DWORD *)sub_329428((int)result, a2, a3, a4);
    v16[1] = a2[2];
    v16[0] = 1;
    v18 = 1;
    v17 = 0;
    result = (_DWORD *)sub_328EAC((int)result, (int)v16, 1);
    if ( result == (_DWORD *)0x80000000 )
    {
      *v7 |= 0x10u;
      return result;
    }
    LODWORD(v10) = *v6;
    if ( result )
      result = 0;
    else
      result = (_DWORD *)((unsigned int)v10 >> 31);
    if ( result )
    {
      HIDWORD(v10) = v7;
      sub_329110(v4, (int *)v5, v10);
      a4 = v7;
      a3 = v6;
      a2 = (int *)v5;
      result = (_DWORD *)v4;
      return (_DWORD *)sub_329428((int)result, a2, a3, a4);
    }
  }
  if ( (_DWORD)v10 )
  {
    HIDWORD(v10) = v7;
    result = (_DWORD *)sub_329110(v4, (int *)v5, v10);
  }
  v12 = *(_QWORD *)v5;
  v11 = *(_DWORD *)(v4 + 4);
  LODWORD(v12) = HIDWORD(v12) - v12 + 1;
  if ( v11 > (int)v12 )
  {
    v13 = *(_DWORD *)v4;
    if ( v11 > HIDWORD(v12) - *(_DWORD *)v4 + 1 )
    {
      return (_DWORD *)sub_32790C(v4, v5, v7);
    }
    else if ( *(_BYTE *)(v5 + 24) )
    {
      v14 = v11 - v12;
      v15 = v13 == 1;
      if ( v13 == 1 )
        v15 = *(unsigned __int16 *)(v4 + 10) == 0;
      if ( !v15 || (*(_BYTE *)(v4 + 8) & 0x70) != 0 )
      {
        result = (_DWORD *)sub_32845C((char *)(v4 + 10), v13, v11 - v12);
        v11 = *(_DWORD *)(v4 + 4);
        *(_DWORD *)v4 = result;
      }
      *(_DWORD *)(v4 + 4) = v11 - v14;
      *v7 |= 0x400u;
    }
  }
  return result;
}
