int __fastcall sub_57C34(int a1)
{
  int v1; // r0
  int v3[2]; // [sp+Ch] [bp-A20h] BYREF
  char v4[8]; // [sp+14h] [bp-A18h] BYREF
  char v5[8]; // [sp+214h] [bp-818h] BYREF
  int v6; // [sp+A14h] [bp-18h] BYREF
  int v7; // [sp+A18h] [bp-14h]
  void *ptr[2]; // [sp+A1Ch] [bp-10h] BYREF
  int v9; // [sp+A24h] [bp-8h]

  v3[0] = a1;
  v9 = 0;
  if ( sub_59620(dword_536294, v3, ptr) == 1 )
  {
    ptr[1] = ptr[0];
    v9 = *((_DWORD *)ptr[0] + 1);
    free(ptr[0]);
  }
  else
  {
    v1 = sub_57C0C(v3[0]);
    snprintf(v4, 0x200u, "/dev/ttyS%d", v1);
    snprintf(v5, 0x800u, "chain %d not inited, dev = %s\n", v3[0], v4);
    sub_3B6AC(2, v5, 0, (int)v5);
    v7 = open(v4, 258);
    v9 = v7;
    v6 = v3[0];
    sub_57D9C(v7);
    sub_59480(dword_536294, v3, 4, &v6, 8);
  }
  return v9;
}
