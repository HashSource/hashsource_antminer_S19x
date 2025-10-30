int __fastcall sub_23EDB4(int a1, int a2, int a3)
{
  int v3; // r6
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r2
  int varsC; // [sp+24h] [bp+Ch] BYREF
  int vars10; // [sp+28h] [bp+10h]
  int varg_r3; // [sp+2Ch] [bp+14h]

  v3 = sub_183A88(a1, a2, a3);
  *(_DWORD *)(v3 + 12) = ps_getpid_0((int)&varsC);
  v4 = (_DWORD *)dword_48A4D4;
  if ( !dword_48A4D4 )
  {
LABEL_8:
    MEMORY[8] = varsC;
    MEMORY[0xC] = vars10;
    MEMORY[0x10] = varg_r3;
    __und(0);
  }
  while ( a1 != v4[2] || a2 != v4[3] || v4[4] != a3 )
  {
    v4 = (_DWORD *)v4[1];
    if ( !v4 )
      goto LABEL_8;
  }
  v5 = vars10;
  v6 = varg_r3;
  v4[2] = varsC;
  v4[3] = v5;
  v4[4] = v6;
  return sub_1B9F88(a1, a2, a3);
}
