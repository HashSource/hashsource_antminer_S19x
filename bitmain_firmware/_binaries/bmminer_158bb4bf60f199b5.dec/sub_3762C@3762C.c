char *__fastcall sub_3762C(char *result)
{
  int v1; // r12
  bool v2; // cc
  int *v3; // r2
  char v4; // r1
  int v5; // r2

  v1 = dword_241D68[0] + 1;
  v2 = dword_241D68[0] > 0x1FDu;
  v3 = &dword_241D68[2 * dword_241D68[0] + 2];
  v3[1] = *((_DWORD *)result + 1);
  *((_BYTE *)v3 + 8) = result[3] & 0x1F;
  *((_BYTE *)v3 + 9) = result[2];
  *((_BYTE *)v3 + 10) = result[1];
  v4 = *result;
  if ( !v2 )
    dword_241D68[0] = v1;
  *((_BYTE *)v3 + 11) = v4 & 0xF;
  if ( v2 )
    dword_241D68[0] = 0;
  if ( (unsigned int)dword_241D70 > 0x1FE )
    v5 = 511;
  else
    v5 = dword_241D70 + 1;
  dword_241D70 = v5;
  return result;
}
