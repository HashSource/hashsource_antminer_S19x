int sub_23CC8()
{
  _DWORD *v0; // r0

  if ( dword_A0D68 )
  {
    memset((void *)dword_A0D68, 0, 0x3368u);
    v0 = (_DWORD *)dword_A0D68;
LABEL_3:
    v0[3239] = 115200;
    *((_WORD *)v0 + 6475) = 96;
    *((_WORD *)v0 + 6476) = 0;
    sub_222E8();
    return 0;
  }
  v0 = calloc(0x3368u, 1u);
  dword_A0D68 = (int)v0;
  if ( v0 )
    goto LABEL_3;
  return -1;
}
