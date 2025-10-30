int __fastcall sub_CD40C(_DWORD *a1, _BYTE *a2, int a3)
{
  void *v4; // r0
  int v7; // r2
  void *v8; // r0
  _DWORD *v10; // r4
  void *v11; // r0
  int v12; // r0
  int v13; // r3
  void *v14; // r0
  void *v15; // r3
  _DWORD *v16; // r4
  unsigned int v17; // r7
  int *v18; // r0
  void *v19; // r3
  void *v20; // r0
  _BYTE *v21; // [sp+8h] [bp-8h] BYREF
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v4 = (void *)a1[25];
  if ( v4 )
    free(v4);
  v7 = a1[3];
  a1[25] = 0;
  if ( (unsigned int)(v7 - 6) > 3 )
  {
    v10 = (_DWORD *)a1[7];
    if ( v10 )
    {
      do
      {
        v11 = (void *)v10[5];
        v10[5] = 0;
        if ( v11 )
          free(v11);
        v10 = (_DWORD *)*v10;
      }
      while ( v10 );
      if ( !*a2 )
        goto LABEL_7;
LABEL_15:
      v21 = a2;
      v12 = sub_327254(a2);
      v13 = a1[3];
      a1[25] = v12;
      a1[31] = 0;
      if ( (unsigned int)(v13 - 6) > 3 )
      {
        v16 = (_DWORD *)a1[7];
        if ( !v16 )
          goto LABEL_9;
        while ( 1 )
        {
          v17 = v16[13];
          v21 = a2;
          v18 = sub_C2574(v17);
          sub_1C427C(&ptr, &v21, v17, v18, 0);
          v19 = ptr;
          ptr = 0;
          v20 = (void *)v16[5];
          v16[5] = v19;
          if ( v20 )
          {
            free(v20);
            if ( ptr )
              free(ptr);
          }
          if ( *v21 )
            break;
          v16 = (_DWORD *)*v16;
          if ( !v16 )
            goto LABEL_9;
        }
      }
      else
      {
        dword_487CE0 = 0;
        v21 = a2;
        sub_1C427C(&ptr, &v21, 0, 0, 0);
        v14 = (void *)a1[38];
        v15 = ptr;
        ptr = 0;
        a1[38] = v15;
        if ( v14 )
        {
          free(v14);
          if ( ptr )
            free(ptr);
        }
        if ( !*v21 )
        {
          a1[39] = dword_487CE0;
          goto LABEL_9;
        }
      }
      sub_946E0("Junk at end of expression");
    }
  }
  else
  {
    v8 = (void *)a1[38];
    a1[38] = 0;
    if ( v8 )
      free(v8);
  }
  if ( *a2 )
    goto LABEL_15;
LABEL_7:
  if ( a3 )
    sub_259F10("Breakpoint %d now unconditional.\n", a1[6]);
LABEL_9:
  sub_CA274((int)(a1 + 3), a1 + 7);
  return sub_1B9D50(a1);
}
