int __fastcall sub_1CF70(int a1, int a2)
{
  int v3; // r3
  int v4; // [sp+4h] [bp-818h]
  int v5; // [sp+8h] [bp-814h]
  int v6; // [sp+Ch] [bp-810h]
  int v7; // [sp+10h] [bp-80Ch]
  int v8; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    if ( a2 )
      (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * a1) + 172))();
  }
  else if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "No board name, chain = %d\n", a1);
    sub_3AF5C(4, s, 0, v3);
  }
  return -1;
}
