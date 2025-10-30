int sub_205BC()
{
  int v0; // r5
  _BYTE *v1; // r8
  unsigned __int64 v2; // r6
  int v3; // r4
  int v4; // r0
  unsigned __int64 v5; // r0
  char *v6; // r12
  unsigned int v7; // t1
  _BYTE v9[208]; // [sp+0h] [bp-D0h] BYREF
  char v10[2048]; // [sp+D0h] [bp+0h] BYREF

  v0 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) == 1 )
    {
      v1 = &v9[-4];
      v2 = 0;
      v3 = 0;
      do
      {
        v4 = sub_2F530(v0, v3++);
        v2 += (unsigned int)v4;
        *((_DWORD *)v1 + 1) = v4;
        v1 += 4;
      }
      while ( v3 != 52 );
      if ( v2 > (unsigned int)&loc_3F79C + 3 )
        break;
    }
LABEL_2:
    if ( ++v0 == 16 )
      return 0;
  }
  LODWORD(v5) = sub_77910(v2, HIDWORD(v2), 104, 0);
  v6 = v9;
  while ( 1 )
  {
    v7 = *(_DWORD *)v6;
    v6 += 4;
    if ( v7 < v5 )
      break;
    if ( v10 == v6 )
      goto LABEL_2;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v10, "Domain unbalance happened!\n");
    sub_47AB4(3, v10, 0);
  }
  return 1;
}
