unsigned int __fastcall sub_3F2C8(int a1)
{
  int v1; // r4
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v3, "****power off hashboard****\n");
    a1 = sub_3AF5C(3, v3, 0, *(int *)"");
  }
  v1 = dword_B0F00;
  if ( !dword_B0F00 )
  {
    do
    {
      if ( sub_266F0(v1) )
        sub_21A10((unsigned __int8)v1);
      ++v1;
    }
    while ( v1 != 4 );
    a1 = sub_3D9D4();
  }
  sub_5B568(a1);
  return sub_21C14();
}
