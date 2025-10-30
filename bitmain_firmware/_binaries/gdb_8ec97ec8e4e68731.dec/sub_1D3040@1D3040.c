int __fastcall sub_1D3040(char *a1)
{
  int v2; // r0
  char v4[40]; // [sp+0h] [bp-28h] BYREF

  sub_1D2E50();
  if ( !a1 || !*a1 )
  {
    a1 = v4;
    v2 = ps_getpid_0((int)&qword_4878EC);
    sub_93170(v4, 0x28u, "gdb_record.%d", v2);
  }
  return sub_232644(a1);
}
