void __fastcall sub_198EE8(int *a1, int a2, char *a3, int a4, int a5)
{
  int v7; // r2
  void **v8; // r4
  void **v9; // r5
  void *v10; // r0
  void *v11; // t1
  char *v12; // r0
  void **v13; // r7
  void **v14; // r6
  void **v15; // r1
  bool v16; // zf
  void **v17; // r5
  void *v18; // r0
  void *v19; // t1
  void **v20; // r5
  void **v21; // r6
  void *v22; // r0
  void *v23; // t1
  int v24; // r0
  void *v25; // r1
  int v26; // r0
  void *v27; // r2
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  void **v29; // [sp+4h] [bp-18h]
  int v30; // [sp+8h] [bp-14h]
  void *v31; // [sp+Ch] [bp-10h] BYREF
  void *v32; // [sp+10h] [bp-Ch]
  int v33; // [sp+14h] [bp-8h]

  switch ( a4 )
  {
    case 4:
      sub_54B80(a2, (const char **)&off_3C1C7C, a3, (int)a3);
      break;
    case 3:
      v12 = sub_F5474(a2, a3);
      sub_F6E48((_DWORD *)a2, a3, (int)v12);
      break;
    case 1:
      v7 = *a1;
      ptr = 0;
      v29 = 0;
      v30 = 0;
      sub_198EA4(a2, a3, v7, a5);
      if ( !a5 )
      {
        sub_F5548(&v31, a3);
        v13 = (void **)ptr;
        v14 = v29;
        v15 = (void **)v32;
        v16 = ptr == v29;
        v32 = 0;
        ptr = v31;
        v29 = v15;
        v30 = v33;
        v31 = 0;
        v33 = 0;
        if ( !v16 )
        {
          v17 = v13;
          do
          {
            v19 = *v17++;
            v18 = v19;
            if ( v19 )
              free(v18);
          }
          while ( v14 != v17 );
        }
        v20 = (void **)v31;
        v21 = (void **)v32;
        if ( v31 != v32 )
        {
          do
          {
            v23 = *v20++;
            v22 = v23;
            if ( v23 )
              free(v22);
          }
          while ( v21 != v20 );
          v21 = (void **)v31;
        }
        if ( v21 )
          sub_339E64(v21);
      }
      if ( (char *)v29 - (_BYTE *)ptr == 4 && *(_DWORD *)(a2 + 68) == *(_DWORD *)(a2 + 72) )
      {
        v24 = *(_DWORD *)(a2 + 84);
        v25 = *(void **)ptr;
        *(_DWORD *)ptr = 0;
        if ( v24 )
        {
          LOWORD(v31) = (unsigned __int8)v24;
          v26 = sub_31E338(v25, v25, &v31, 0, ptr);
          *(_DWORD *)(a2 + 84) = 58;
        }
        else
        {
          v26 = sub_31E338(v25, v25, ":", 0, ptr);
        }
        v27 = *(void **)ptr;
        *(_DWORD *)ptr = v26;
        if ( v27 )
          free(v27);
        *(_BYTE *)(a2 + 96) = 1;
      }
      sub_F6DD4((_DWORD *)a2, (void ***)&ptr);
      v8 = (void **)ptr;
      v9 = v29;
      if ( ptr != v29 )
      {
        do
        {
          v11 = *v8++;
          v10 = v11;
          if ( v11 )
            free(v10);
        }
        while ( v9 != v8 );
        v9 = (void **)ptr;
      }
      if ( v9 )
        sub_339E64(v9);
      break;
  }
}
