int __fastcall sub_1D49EC(int a1)
{
  int v1; // r4
  _DWORD *v3; // r0

  if ( dword_487D4C )
  {
    v3 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v3, "[record-btrace] require\n");
  }
  v1 = sub_23E408(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
  if ( !v1 )
    sub_946E0("No thread.");
  sub_23F788();
  sub_E39C4(v1);
  if ( sub_E1F40(v1) )
    sub_946E0("No trace.");
  return v1;
}
