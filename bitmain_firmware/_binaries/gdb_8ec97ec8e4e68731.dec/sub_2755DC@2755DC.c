int __fastcall sub_2755DC(int a1)
{
  _DWORD *v2; // r4
  int result; // r0
  char *v4; // r8
  _DWORD *v5; // r0
  int *v6; // r7
  int *v7; // r10
  int v8; // r9
  int v9; // t1
  void *v10; // r0
  _DWORD *v11; // r7
  _DWORD *v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // t1
  _DWORD *v15; // r0
  const char *v16; // r7
  _DWORD *v17; // r4
  size_t v18; // r0
  _DWORD *v19; // r0
  int *v20; // r7
  int *v21; // r10
  int v22; // r9
  int v23; // t1
  void *v24; // r0
  _DWORD *v25; // r7
  _DWORD *v26; // r10
  _DWORD *v27; // r9
  _DWORD *v28; // t1
  _DWORD *v29; // r0
  void *v30; // r0
  void *ptr; // [sp+8h] [bp-20h] BYREF
  _DWORD *v32; // [sp+Ch] [bp-1Ch] BYREF
  void *v33; // [sp+10h] [bp-18h] BYREF
  char v34; // [sp+18h] [bp-10h] BYREF

  v2 = (_DWORD *)((int (*)(void))loc_16CE10)();
  result = ((int (__fastcall *)(int))loc_16CD98)(a1);
  v4 = (char *)result;
  if ( !v2 )
    goto LABEL_28;
  if ( v2[7] )
  {
    result = j_strcmp((const char *)v2[6], (const char *)dword_487A34);
    if ( result )
    {
      v5 = (_DWORD *)v2[6];
      if ( v5 != v2 + 8 )
        sub_339E64(v5);
      v6 = (int *)v2[3];
      v7 = (int *)v2[4];
      if ( v6 != v7 )
      {
        do
        {
          v9 = *v6++;
          v8 = v9;
          if ( v9 )
          {
            v10 = *(void **)(v8 + 24);
            if ( v10 )
              sub_339E64(v10);
            if ( *(_DWORD *)v8 != v8 + 8 )
              sub_339E64(*(void **)v8);
            sub_33AC04((void *)v8);
          }
        }
        while ( v7 != v6 );
        v7 = (int *)v2[3];
      }
      if ( v7 )
        sub_339E64(v7);
      v11 = (_DWORD *)*v2;
      v12 = (_DWORD *)v2[1];
      if ( (_DWORD *)*v2 != v12 )
      {
        do
        {
          v14 = (_DWORD *)*v11++;
          v13 = v14;
          if ( v14 )
          {
            v15 = (_DWORD *)v13[1];
            if ( v15 != v13 + 3 )
              sub_339E64(v15);
            sub_33AC04(v13);
          }
        }
        while ( v12 != v11 );
        v12 = (_DWORD *)*v2;
      }
      if ( v12 )
        sub_339E64(v12);
      sub_33AC04(v2);
      sub_16CE80(a1, 0);
LABEL_28:
      sub_27455C(&ptr, v4, (_BYTE *)dword_487A34);
      v16 = (const char *)ptr;
      if ( !ptr )
        goto LABEL_60;
      sub_25AF84((int)&v33, v4);
      v17 = sub_9836C(0x30u);
      memset(v17, 0, 0x30u);
      v17[6] = v17 + 8;
      *((_BYTE *)v17 + 32) = 0;
      v32 = v17;
      if ( sub_274C9C(
             (struct XML_ParserStruct *)"syscalls info",
             0,
             (int)&off_3F8AB4,
             v16,
             (struct XML_ParserStruct *)&v32) )
      {
        sub_946B0("Could not load XML syscalls info; ignoring");
        v19 = (_DWORD *)v17[6];
        if ( v17 + 8 != v19 )
          sub_339E64(v19);
        v20 = (int *)v17[3];
        v21 = (int *)v17[4];
        if ( v20 != v21 )
        {
          do
          {
            v23 = *v20++;
            v22 = v23;
            if ( v23 )
            {
              v24 = *(void **)(v22 + 24);
              if ( v24 )
                sub_339E64(v24);
              if ( *(_DWORD *)v22 != v22 + 8 )
                sub_339E64(*(void **)v22);
              sub_33AC04((void *)v22);
            }
          }
          while ( v21 != v20 );
          v21 = (int *)v17[3];
        }
        if ( v21 )
          sub_339E64(v21);
        v25 = (_DWORD *)*v17;
        v26 = (_DWORD *)v17[1];
        if ( (_DWORD *)*v17 != v26 )
        {
          do
          {
            v28 = (_DWORD *)*v25++;
            v27 = v28;
            if ( v28 )
            {
              v29 = (_DWORD *)v27[1];
              if ( v29 != v27 + 3 )
                sub_339E64(v29);
              sub_33AC04(v27);
            }
          }
          while ( v26 != v25 );
          v26 = (_DWORD *)*v17;
        }
        if ( v26 )
          sub_339E64(v26);
        v30 = v17;
        v17 = 0;
        sub_33AC04(v30);
      }
      if ( v33 != &v34 )
        sub_339E64(v33);
      if ( ptr )
        free(ptr);
      if ( v17 )
      {
        if ( *v17 != v17[1] )
        {
LABEL_36:
          v18 = strlen((const char *)dword_487A34);
          sub_33BC54((int)(v17 + 6), 0, v17[7], (void *)dword_487A34, v18);
          return sub_16CE80(a1, (int)v17);
        }
      }
      else
      {
LABEL_60:
        v17 = sub_9836C(0x30u);
        memset(v17, 0, 0x30u);
        v17[6] = v17 + 8;
        *((_BYTE *)v17 + 32) = 0;
      }
      if ( v4 )
        sub_946B0("Could not load the syscall XML file `%s/%s'.", (const char *)dword_487A34, v4);
      else
        sub_946B0("There is no XML file to open.");
      sub_946B0("GDB will not be able to display syscall names nor to verify if\nany provided syscall numbers are valid.");
      goto LABEL_36;
    }
  }
  return result;
}
