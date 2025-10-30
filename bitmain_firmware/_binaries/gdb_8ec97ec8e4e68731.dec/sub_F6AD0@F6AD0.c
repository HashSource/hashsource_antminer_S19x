int __fastcall sub_F6AD0(_DWORD *a1, const char **a2, int a3, char *a4, char *a5)
{
  const char **v10; // r9
  const char *v11; // r1
  _BYTE *v12; // r2
  char *v13; // r1
  int v14; // r4
  int v15; // r10
  int v16; // r4
  int v17; // r10
  int v18; // r12
  size_t v19; // r2
  const char *v20; // r3
  int v21; // r1
  bool v22; // zf
  int v23; // r1
  char *v24; // [sp+Ch] [bp-10h]
  void *ptr[2]; // [sp+14h] [bp-8h] BYREF

  if ( !dword_46D36C || dword_46D36C <= (unsigned int)sub_323970(a1[20]) )
    return 0;
  v10 = (const char **)sub_324030(a1[20], *a2, 1);
  if ( !*v10 )
  {
    if ( !a3 )
      goto LABEL_21;
    if ( *(_DWORD *)(a3 + 4) == *(_DWORD *)(a3 + 8) )
    {
      v11 = *(const char **)a3;
    }
    else
    {
      v12 = *(_BYTE **)(a3 + 16);
      *(_DWORD *)(a3 + 20) = 0;
      *v12 = 0;
      v13 = *(char **)a3;
      v14 = *(_DWORD *)(a3 + 4);
      v15 = *(_DWORD *)(a3 + 8);
      if ( v14 != v15 )
      {
        v16 = v14 + 8;
        v17 = v15 + 8;
        do
        {
          v18 = *(_DWORD *)(v16 - 8);
          v16 += 8;
          sub_33BC54(a3 + 16, *(_DWORD *)(a3 + 20), 0, v13, v18 - (_DWORD)v13);
          v13 = *(char **)(v16 - 12);
        }
        while ( v17 != v16 );
      }
      v24 = v13;
      v19 = strlen(v13);
      if ( 0x7FFFFFFF - *(_DWORD *)(a3 + 20) < v19 )
        sub_33D184("basic_string::append");
      sub_33C320(a3 + 16, v24, v19);
      v11 = *(const char **)(a3 + 16);
    }
    if ( !v11 )
LABEL_21:
      v11 = *a2;
    sub_F574C((int *)ptr, v11, a4, a5);
    sub_F5924((int)a1, (_BYTE **)ptr);
    v20 = *a2;
    *v10 = *a2;
    v21 = a1[18];
    if ( v21 == a1[19] )
    {
      sub_F7F98(a1 + 17);
    }
    else
    {
      v22 = v21 == 0;
      v23 = v21 + 4;
      if ( !v22 )
      {
        *(_DWORD *)(v23 - 4) = v20;
        *a2 = 0;
      }
      a1[18] = v23;
    }
    if ( ptr[0] )
      free(ptr[0]);
  }
  return 1;
}
