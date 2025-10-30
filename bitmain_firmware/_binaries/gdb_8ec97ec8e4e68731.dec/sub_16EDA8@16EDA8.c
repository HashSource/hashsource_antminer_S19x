char *sub_16EDA8()
{
  _DWORD *v0; // r10
  void *v1; // r7
  int v2; // r8
  int v3; // r4
  int v4; // r6
  int v5; // r9
  size_t i; // r5
  int v7; // r11
  char *v8; // r0
  size_t v9; // r1
  char *result; // r0
  __int64 v11; // r0
  int v12; // r2

  v0 = (_DWORD *)dword_4877F0;
  if ( dword_4877F0 )
  {
    v1 = 0;
    v2 = 0;
    while ( 1 )
    {
      v3 = sub_2A67B8(*v0, 0);
      if ( !v3 )
        break;
      v4 = v2 + 1;
      v5 = v2;
      for ( i = 4 * (v2 + 1); ; i += 4 )
      {
        v7 = *(_DWORD *)(v3 + 24);
        v2 = v4;
        v8 = (char *)sub_93050(v1, i);
        v3 = *(_DWORD *)(v3 + 48);
        *(_DWORD *)&v8[i - 4] = v7;
        v1 = v8;
        if ( !v3 )
          break;
        v5 = v4++;
      }
      v0 = (_DWORD *)v0[4];
      if ( !v0 )
      {
        v9 = 4 * (v5 + 2);
        goto LABEL_9;
      }
    }
    v11 = sub_94700((int)"gdbarch.c", 5242, "gdbarch_architecture_names: multi-arch unknown");
    return (char *)sub_16EE78(v11, HIDWORD(v11), v12);
  }
  else
  {
    i = 0;
    v9 = 4;
    v1 = 0;
LABEL_9:
    result = (char *)sub_93050(v1, v9);
    *(_DWORD *)&result[i] = 0;
  }
  return result;
}
