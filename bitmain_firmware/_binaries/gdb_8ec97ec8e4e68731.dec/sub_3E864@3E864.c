int __fastcall sub_3E864(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int *v5; // r5
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r6
  int v12; // r1
  int result; // r0
  char *v14; // r0
  int v15; // [sp+4h] [bp-18h] BYREF
  int v16; // [sp+8h] [bp-14h]
  int v17; // [sp+Ch] [bp-10h]
  int v18[2]; // [sp+14h] [bp-8h] BYREF

  v5 = &v15;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18[0] = 0;
  v7 = ps_getpid_0(&v15);
  v8 = (_DWORD *)dword_471BF4;
  if ( !dword_471BF4 )
    goto LABEL_6;
  if ( v7 != *(_DWORD *)(dword_471BF4 + 4) )
  {
    while ( 1 )
    {
      v8 = (_DWORD *)*v8;
      if ( !v8 )
        break;
      if ( v7 == v8[1] )
        goto LABEL_7;
    }
LABEL_6:
    MEMORY[0x10] = v15;
    MEMORY[0x14] = v16;
    MEMORY[0x18] = v17;
    __und(0);
  }
LABEL_7:
  v9 = v16;
  v10 = v17;
  if ( a4 )
  {
    v4 = 0;
    v5 = 0;
  }
  v8[4] = v15;
  v8[5] = v9;
  v8[6] = v10;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = v18[0];
      if ( v18[0] )
        goto LABEL_16;
      while ( 1 )
      {
        v12 = (int)v5;
        v5 = (int *)((char *)v5 + 1);
        result = sub_3E6F4((int)v8, v12, v18);
        if ( !result )
          break;
        v4 = v11;
        v11 = v18[0];
        if ( v18[0] )
          goto LABEL_16;
      }
      if ( ++v4 == 4 )
        goto LABEL_13;
    }
  }
  result = sub_3E6F4((int)v8, 0, v18);
LABEL_13:
  v11 = v18[0];
  if ( v18[0] )
  {
LABEL_16:
    v14 = sub_3E4C0(v11);
    sub_946E0("Cannot find new threads: %s", v14);
  }
  return result;
}
