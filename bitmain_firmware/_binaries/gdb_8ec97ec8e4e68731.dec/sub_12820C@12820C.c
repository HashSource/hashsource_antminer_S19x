char *__fastcall sub_12820C(int a1, _BYTE *a2, char **a3, int a4)
{
  int v4; // r7
  char *v8; // r0
  char *v9; // r4
  char *v10; // r5
  char **v11; // r0
  int v12; // r3
  int v14; // r4
  char *v15; // r8
  int v16; // r0
  char *v17; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+10h] [bp-Ch] BYREF
  char *v19; // [sp+14h] [bp-8h] BYREF

  v4 = 0;
  v8 = sub_127FB8((const char ***)a1, &v17, a2, &v18, 0);
  v9 = v17;
  v10 = v8;
  if ( v17 )
  {
    v11 = (char **)sub_323E68(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 144), v17, *((_DWORD *)v17 + 2), 1);
    v12 = v18;
    *v11 = v9;
    if ( v12 )
    {
      v14 = 0;
      v19 = v10;
      v15 = v17;
      while ( 1 )
      {
        v16 = sub_12820C(a1, v10, &v19, v15);
        if ( !v16 )
          break;
        if ( v4 )
          *(_DWORD *)(v14 + 16) = v16;
        else
          v4 = v16;
        v10 = v19;
        v14 = v16;
      }
      v9 = v17;
      *a3 = v19;
      *((_DWORD *)v15 + 3) = v4;
    }
    else
    {
      v9 = v17;
      *((_DWORD *)v17 + 3) = 0;
      *a3 = v10;
    }
    *((_DWORD *)v9 + 5) = a4;
    *((_DWORD *)v9 + 4) = 0;
  }
  else
  {
    *a3 = v8;
  }
  return v9;
}
