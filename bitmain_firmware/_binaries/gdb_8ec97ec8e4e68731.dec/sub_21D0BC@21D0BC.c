_DWORD *__fastcall sub_21D0BC(_DWORD *a1, char *a2, int a3)
{
  int v6; // r0
  int v7; // r1
  _DWORD *v9; // r4
  int v10; // r2
  void *v11; // r0
  int v12; // r0
  _DWORD *v13; // r4
  int v14; // r9
  _DWORD *v15; // r4
  int v16; // r6
  int v17; // r2
  void *v18; // r0
  int v19; // [sp+10h] [bp-14h] BYREF
  _DWORD *v20; // [sp+14h] [bp-10h] BYREF
  int v21; // [sp+18h] [bp-Ch] BYREF
  int v22; // [sp+1Ch] [bp-8h]

  v6 = sub_219F50(dword_487D2C);
  sub_21B850(&v21, v6, 0, 1, a2, a3, &v19, &v20);
  if ( v21 )
  {
    if ( v21 != 1 )
    {
LABEL_3:
      v7 = v22;
      *a1 = v21;
      a1[1] = v7;
      return a1;
    }
  }
  else
  {
    v13 = *(_DWORD **)(dword_487D2C + 36);
    if ( v13 )
    {
      while ( 1 )
      {
        sub_21C464(&v21, (int)v13, 1, a2, a3);
        v14 = v21;
        if ( v21 )
          break;
        v13 = (_DWORD *)*v13;
        if ( !v13 )
          goto LABEL_4;
      }
      if ( v19 )
      {
        v15 = v20;
        v16 = v22;
        v17 = *v20;
        if ( *v20 )
        {
          ++*(_DWORD *)(v19 + 8);
          if ( v17 == 1 )
          {
            v18 = (void *)v15[2];
            if ( v18 )
              free(v18);
          }
        }
        v15[2] = v14;
        v15[3] = v16;
        *(_QWORD *)v15 = 2;
      }
      goto LABEL_3;
    }
LABEL_4:
    if ( v19 )
    {
      v9 = v20;
      v10 = *v20;
      if ( *v20 )
      {
        ++*(_DWORD *)(v19 + 8);
        if ( v10 == 1 )
        {
          v11 = (void *)v9[2];
          if ( v11 )
            free(v11);
        }
      }
      *(_QWORD *)v9 = 1;
      v12 = sub_327254(a2);
      v9[3] = a3;
      v9[2] = v12;
    }
  }
  *a1 = 0;
  a1[1] = 0;
  return a1;
}
