int sub_1BD36C()
{
  int *v0; // r4
  const char *v1; // r5
  int result; // r0
  const char *v3; // r1
  int v4; // r6
  int v5; // r0
  int v6; // lr
  int v7; // r4
  int v8; // r0
  _DWORD v9[2]; // [sp+4h] [bp-40h] BYREF
  int v10; // [sp+Ch] [bp-38h]
  int v11[7]; // [sp+24h] [bp-20h] BYREF

  v0 = &dword_487C2C;
  v1 = (const char *)dword_487C34;
  if ( !strcmp((const char *)dword_487C34, "auto") )
  {
    dword_487C2C = 0;
  }
  else if ( !strcmp(v1, "default") )
  {
    *(_QWORD *)&dword_487C2C = 0x400000002LL;
  }
  else if ( !strcmp(v1, "none") )
  {
    dword_487C30 = 0;
    dword_487C2C = 2;
  }
  else
  {
    v3 = "SVR4";
    v4 = 1;
    while ( strcmp(v1, v3) )
    {
      if ( ++v4 == 20 )
      {
        sub_94700((int)"osabi.c", 627, "Invalid OS ABI \"%s\" passed to command handler.", v1);
        goto LABEL_15;
      }
      v3 = (&off_3C9F2C)[2 * v4];
    }
    dword_487C2C = 2;
    dword_487C30 = v4;
  }
  v0 = v11;
  sub_B8668(v11);
  result = sub_B81A8(v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6]);
  if ( !result )
  {
LABEL_15:
    v5 = sub_94700((int)"osabi.c", 636, "Updating OS ABI failed.");
    v9[1] = v0;
    v10 = v6;
    v7 = v5;
    v8 = *(_DWORD *)(v5 + 160);
    v9[0] = 0;
    switch ( *(_BYTE *)(v8 + 7) )
    {
      case 0:
      case 1:
      case 3:
        sub_2ADCFC(v7, sub_1BD69C, v9);
        if ( v9[0] )
          goto LABEL_19;
        v8 = *(_DWORD *)(v7 + 160);
LABEL_18:
        strcmp((const char *)(v8 + 8), "FreeBSD");
LABEL_19:
        __asm { POP             {R4,PC} }
        return result;
      case 2:
        return 6;
      case 6:
        return 3;
      case 9:
        return 5;
      case 0xD:
        return 16;
      default:
        goto LABEL_18;
    }
  }
  return result;
}
