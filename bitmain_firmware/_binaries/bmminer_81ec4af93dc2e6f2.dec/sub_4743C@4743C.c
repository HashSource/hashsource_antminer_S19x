int sub_4743C()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v4, "[DEBUG] HW sweep reset.\n");
    sub_3AF5C(4, v4, 0, *(int *)"weep reset.\n");
  }
  v0 = 0;
  sub_281C4(255, 0);
  do
  {
    v1 = sub_266F0(v0);
    if ( v1 )
      v1 = sub_768F0((unsigned __int8)v0);
    ++v0;
  }
  while ( v0 != 4 );
  v2 = sub_5B4E4(v1);
  return sub_5B518(v2 & 0xFFFF70FF | 0x8400);
}
