void __fastcall sub_1C8F4C(char *a1, int a2)
{
  char v3; // r6
  char v4; // r9
  char v5; // r8
  int v6; // r10
  _DWORD *v7; // r4
  int v8; // r0
  void *v9; // r3
  void *v10; // r2
  int v11; // r0
  _DWORD *v12; // r2
  int v13; // lr
  int v14; // r0
  int v15; // r1
  _DWORD *v16; // r4
  _BOOL4 v17; // r3
  char *v18; // [sp+0h] [bp-10h] BYREF
  void *ptr; // [sp+4h] [bp-Ch] BYREF
  int v20; // [sp+8h] [bp-8h] BYREF
  int v21; // [sp+Ch] [bp-4h]

  v18 = a1;
  if ( a1 )
  {
    if ( *a1 == 47 )
    {
      v18 = a1 + 1;
      sub_1C553C((char *)&v20, (const char **)&v18, 0, 0);
      v5 = v21;
      v4 = BYTE1(v21);
      v6 = v20;
      v3 = BYTE2(v21);
      v17 = (unsigned __int8)v21 == 0;
      if ( !BYTE1(v21) )
        v17 = 0;
      if ( v17 )
      {
        a1 = v18;
        v5 = 120;
      }
      else
      {
        a1 = v18;
        if ( (unsigned __int8)v21 == 105 )
        {
          v4 = 98;
        }
        else if ( (unsigned __int8)v21 == 115 )
        {
          v4 = 98;
        }
      }
    }
    else
    {
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0;
    }
    dword_487CE0 = 0;
    sub_1C42A8((char **)&ptr, a1);
    v7 = sub_9836C(0x24u);
    memset(v7, 0, 0x24u);
    v8 = sub_327254(v18);
    v9 = (void *)v7[2];
    v10 = ptr;
    v7[1] = v8;
    ptr = 0;
    v7[2] = v10;
    if ( v9 )
      free(v9);
    v11 = dword_487CE0;
    v12 = (_DWORD *)dword_487CEC;
    v13 = dword_487D08;
    v7[6] = dword_487D2C;
    BYTE2(v21) = v3;
    v7[7] = v11;
    v20 = v6;
    ++v13;
    LOBYTE(v21) = v5;
    BYTE1(v21) = v4;
    v14 = v6;
    v15 = v21;
    v7[3] = v13;
    dword_487D08 = v13;
    v7[4] = v6;
    v7[5] = v15;
    if ( !v12 )
      dword_487CEC = (int)v7;
    v7[8] = 1;
    *v7 = 0;
    if ( v12 )
    {
      while ( *v12 )
        v12 = (_DWORD *)*v12;
      *v12 = v7;
      if ( !a2 )
        goto LABEL_10;
    }
    else if ( !a2 )
    {
      goto LABEL_10;
    }
    v14 = sub_1C8AB0((int)v7);
LABEL_10:
    sub_243C34(v14);
    if ( ptr )
      free(ptr);
    return;
  }
  v16 = (_DWORD *)dword_487CEC;
  if ( dword_487CEC )
  {
    do
    {
      sub_1C8AB0((int)v16);
      v16 = (_DWORD *)*v16;
    }
    while ( v16 );
  }
}
