unsigned int *__fastcall sub_15852C(int a1, int a2)
{
  int *v2; // r4
  int **v3; // r6
  unsigned int *v6; // r5
  unsigned int v7; // r7
  unsigned int *v8; // r10
  _DWORD *v9; // r4
  int *v10; // t1
  int v11; // r3
  int (__fastcall *v12)(int *, int, int, void **); // r7
  bool v13; // zf
  int v14; // r7
  unsigned int *v15; // r0
  char *v16; // r0
  unsigned int *v17; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  v2 = &dword_35C954;
  v3 = &off_3A7718;
  v6 = 0;
  do
  {
    v11 = v2[7];
    if ( v11 )
    {
      v12 = *(int (__fastcall **)(int *, int, int, void **))(v11 + 64);
      if ( v12 )
      {
        if ( v12(v2, a1, a2, &ptr) == 2 )
        {
          sub_1584E8(v6);
          sub_946E0("Error while looking for matching xmethod workers defined in %s.", (const char *)v2[2]);
        }
        v9 = ptr;
        v13 = v6 == 0;
        if ( v6 )
          v13 = ptr == 0;
        if ( !v13 )
        {
          v14 = *v6 + *(_DWORD *)ptr;
          v15 = sub_99FE0(0, -v14);
          *v15 = v14;
          v8 = v15;
          v16 = (char *)memcpy(v15 + 2, v6 + 2, 4 * *v6);
          memcpy(&v16[4 * *v6], v9 + 2, 4 * *v9);
LABEL_18:
          v17 = v6;
          v6 = v8;
          free(v17);
          v9 = ptr;
          goto LABEL_8;
        }
        if ( v6 )
        {
          v7 = *v6;
          if ( !*v6 )
          {
            v8 = 0;
            goto LABEL_18;
          }
          v9 = v6;
          goto LABEL_6;
        }
        if ( ptr )
        {
          v7 = *(_DWORD *)ptr;
          if ( *(_DWORD *)ptr )
          {
LABEL_6:
            v8 = sub_99FE0(0, -v7);
            *v8 = v7;
            memcpy(v8 + 2, v9 + 2, 4 * v7);
            if ( v6 )
              goto LABEL_18;
            v9 = ptr;
            v6 = v8;
LABEL_8:
            if ( !v9 )
              goto LABEL_10;
          }
          free(v9);
        }
      }
    }
LABEL_10:
    v10 = *v3++;
    v2 = v10;
  }
  while ( v10 );
  return v6;
}
