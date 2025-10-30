int *sub_21C7E8()
{
  char v0; // r3
  int v2; // [sp+8h] [bp-14h]
  int v3; // [sp+Ch] [bp-10h]
  int v4; // [sp+10h] [bp-Ch]
  int v5; // [sp+14h] [bp-8h]

  v0 = byte_489710;
  __dmb(0xBu);
  if ( (v0 & 1) == 0 && sub_33A554(&byte_489710) )
  {
    LOBYTE(v2) = 0;
    dword_48971C = (int)dword_489724;
    dword_4897EC = 0;
    dword_489724[0] = v2;
    dword_489724[1] = v3;
    dword_489724[2] = v4;
    dword_489724[3] = v5;
    byte_489719 = 0;
    dword_489720 = 0;
    byte_489750 = 0;
    byte_48976C = 0;
    byte_489788 = 0;
    byte_4897A4 = 0;
    dword_4897E4 = 0;
    dword_4897E8 = 0;
    *(int *)((char *)&dword_4897EC + 3) = 0;
    dword_489714 = 1;
    byte_489718 = 1;
    sub_33A65C(&byte_489710);
    _aeabi_atexit(&dword_489714, (void (*)(void *))sub_AF570);
  }
  return &dword_489714;
}
