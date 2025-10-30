int __fastcall sub_348E18(int *a1)
{
  char v1; // r2
  unsigned int *v3; // r1
  unsigned int v4; // r0
  unsigned int v6; // r0

  v1 = *((_BYTE *)a1 + 8);
  if ( v1 )
  {
    v6 = *a1;
    *((_BYTE *)a1 + 8) = v1 - 1;
    *a1 = v6 << 8;
    return HIBYTE(v6);
  }
  else if ( *((_BYTE *)a1 + 9) )
  {
    v3 = (unsigned int *)a1[1];
    --*((_BYTE *)a1 + 9);
    v4 = *v3;
    a1[1] = (int)(v3 + 1);
    *((_BYTE *)a1 + 8) = 3;
    *a1 = v4 << 8;
    return HIBYTE(v4);
  }
  else
  {
    return 176;
  }
}
