int __fastcall sub_AE140(size_t *a1, int *a2)
{
  int v3; // r2
  int v4; // r3
  char *v6; // r1
  int v8; // r3

  if ( !a2 )
    return 0;
  v3 = *a2;
  v4 = a2[1];
  v6 = (char *)a2[2];
  a1[1] = v4;
  if ( !sub_AE088(a1, v6, v3) )
    return 0;
  v8 = a1[3] & 0x80;
  a1[3] = v8;
  a1[3] = v8 | a2[3] & 0xFFFFFF7F;
  return 1;
}
