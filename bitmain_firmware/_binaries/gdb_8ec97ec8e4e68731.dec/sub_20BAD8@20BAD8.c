int *__fastcall sub_20BAD8(int *result)
{
  int v1; // r0
  _DWORD *v2; // r6
  char v3; // r2
  int v4; // r8
  int v5; // r3
  _DWORD *v6; // r5
  int v7; // r4
  _DWORD *v8; // t1
  char *v9; // r0
  int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // [sp+4h] [bp-4h] BYREF

  v12 = 0;
  if ( dword_489658 )
  {
    v1 = sub_220854(result);
    v2 = (_DWORD *)dword_4788E8;
    v3 = *(_BYTE *)(v1 + 32) & 7 | 0x50;
    v4 = v1;
    *(_DWORD *)v1 = dword_489658;
    *(_BYTE *)(v1 + 32) = v3;
    v5 = dword_48965C;
    if ( v2 )
    {
      while ( v2 != (_DWORD *)v5 )
      {
        if ( (int)v2[1] > 0 )
        {
          v6 = v2 + 1;
          v7 = 0;
          do
          {
            v8 = (_DWORD *)v6[1];
            ++v6;
            sub_E5AA8(v8, &v12);
            ++v7;
          }
          while ( v2[1] > v7 );
        }
        v2 = (_DWORD *)*v2;
        v5 = dword_48965C;
        if ( !v2 )
          goto LABEL_8;
      }
      v5 = (int)v2;
    }
    else
    {
LABEL_8:
      if ( !v5 )
      {
LABEL_9:
        v9 = *(char **)v4;
        *(_DWORD *)(v4 + 24) = v12;
        result = &dword_489414[sub_E645C(v9)];
        dword_489658 = 0;
        *(_DWORD *)(v4 + 8) = result[16];
        result[16] = v4;
        return result;
      }
    }
    v10 = dword_489660;
    if ( dword_489660 < *(_DWORD *)(v5 + 4) )
    {
      do
      {
        v11 = *(_DWORD **)(v5 + 4 * (v10 + 2));
        ++v10;
        sub_E5AA8(v11, &v12);
        v5 = dword_48965C;
      }
      while ( *(_DWORD *)(dword_48965C + 4) > v10 );
    }
    goto LABEL_9;
  }
  if ( dword_47AC88 > 0 )
    return sub_F43B4(&off_46D334, "ECOMM symbol unmatched by BCOMM");
  return result;
}
