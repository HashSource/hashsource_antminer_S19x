int __fastcall sub_298304(int a1, int *a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r4
  int v6; // r7
  _BYTE *v11; // r6
  int v12; // r8
  int v13; // r7
  int v14; // r3
  int v15; // r0
  int result; // r0
  _BYTE *v17; // r2
  int v18; // r12
  int v19; // r1
  int v20; // r2
  int v21; // [sp+0h] [bp-14h]
  _DWORD v22[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = *a2;
  v6 = 0;
  v22[1] = 0;
  v11 = (_BYTE *)(a1 + v5);
  v22[0] = 0;
  sub_29B320(a1, v5, v22);
  if ( !*(_BYTE *)(a1 + v5) )
  {
    if ( (a4 & 1) == 0 )
    {
      v14 = v5;
      result = 0;
      goto LABEL_26;
    }
    result = (int)sub_93028(1u);
    v14 = v5;
    v6 = 0;
    v17 = (_BYTE *)result;
LABEL_25:
    *v17 = 0;
    *a5 = v6;
    if ( *v11 )
      goto LABEL_30;
    goto LABEL_26;
  }
  if ( a3 == *(unsigned __int8 *)(a1 + v5) )
  {
    if ( !a4 )
    {
      v14 = v5;
      result = 0;
      goto LABEL_30;
    }
    result = (int)sub_93028(1u);
    v14 = v5;
    v17 = (_BYTE *)result;
    goto LABEL_25;
  }
  v12 = v5;
  v13 = v5;
  do
  {
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 || (v15 = sub_29B1F4(v11, v22), v15 <= 1) )
    {
      v14 = v13 + 1;
      if ( *v11 == 92 && *(unsigned __int8 *)(a1 + v12 + 1) == a3 )
        v14 = v13 + 2;
    }
    else
    {
      v14 = v15 + v13;
    }
    v12 = v14;
    v11 = (_BYTE *)(a1 + v14);
    if ( !*(_BYTE *)(a1 + v14) )
    {
      result = a4 & 1;
      if ( v5 < v14 )
        result = 1;
      if ( result )
        goto LABEL_17;
LABEL_26:
      *a2 = v14;
      return result;
    }
    v13 = v14;
  }
  while ( *(unsigned __int8 *)(a1 + v14) != a3 );
  result = a4 & 1;
  if ( v5 < v14 )
    result = 1;
  if ( result )
  {
LABEL_17:
    v21 = v14;
    result = (int)sub_93028(v14 - v5 + 1);
    v14 = v21;
    if ( v5 < v21 )
    {
      v18 = result - 1;
      v6 = 0;
      do
      {
        v19 = *(unsigned __int8 *)(a1 + v5);
        v20 = v5 + 1;
        ++v6;
        if ( v19 == 92 && *(unsigned __int8 *)(a1 + v5 + 1) == a3 )
        {
          LOBYTE(v19) = *(_BYTE *)(a1 + v20);
          v20 = v5 + 2;
        }
        v5 = v20;
        *(_BYTE *)++v18 = v19;
      }
      while ( v20 < v21 );
      v17 = (_BYTE *)(result + v6);
    }
    else
    {
      v17 = (_BYTE *)result;
      v6 = 0;
    }
    goto LABEL_25;
  }
LABEL_30:
  *a2 = v14 + 1;
  return result;
}
