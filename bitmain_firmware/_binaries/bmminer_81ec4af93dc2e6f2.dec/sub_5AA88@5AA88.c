int __fastcall sub_5AA88(int a1, unsigned int a2, int a3)
{
  int v3; // r0
  int v5; // [sp+10h] [bp-14h]
  int v6; // [sp+18h] [bp-Ch]
  int v7; // [sp+1Ch] [bp-8h]

  if ( a1 || a2 <= 1 )
    v7 = 256;
  else
    v7 = ((_WORD)a2 << 8) & 0x1F00;
  if ( a1 )
    v6 = 0x4000;
  else
    v6 = 0;
  if ( a3 )
  {
    a1 = sub_5C4F8();
    v5 = 128;
  }
  else
  {
    v5 = 0;
  }
  v3 = sub_5B4E4(a1);
  return sub_5B518(v3 & 0xFFFFE0BF | v7 | v6 | v5 | 0x8060);
}
