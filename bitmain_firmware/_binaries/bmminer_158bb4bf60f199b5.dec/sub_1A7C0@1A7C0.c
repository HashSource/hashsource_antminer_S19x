int __fastcall sub_1A7C0(int a1)
{
  int v2; // r5
  int v3; // r4
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = 1 << a1;
  v3 = 3000;
  do
  {
    if ( (sub_6FF04() & v2) != 0 )
      return 1;
    sub_4A830(1000, 0);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v5, 0x800u, "Error: send open core work Failed on Chain[%d]!\n", a1);
    sub_47AB4(3, v5, 0);
  }
  return 0;
}
