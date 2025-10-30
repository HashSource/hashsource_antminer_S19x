_DWORD *__fastcall sub_1E8C30(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r9
  int v7; // r0
  int v8; // r6

  v4 = ps_getpid_0((int)&dword_4878EC);
  v5 = sub_16F654(v4);
  ((void (__fastcall *)(int))loc_1E2770)(v5);
  v6 = dword_488C94;
  v7 = sub_23E408(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
  if ( a1 )
    sub_946E0("Argument given to \"detach\" when remotely debugging.");
  v8 = v7;
  if ( !sub_22EBBC(v7) )
    sub_946E0("No process to detach from.");
  sub_231978(a2);
  sub_1E8AB0(v4);
  if ( a2 && !*(_DWORD *)(v6 + 24) && sub_183CF0() == 1 )
    sub_259B34("Ending remote debugging.\n");
  if ( !v8 || *(_DWORD *)(v8 + 208) != 4 )
    JUMPOUT(0x230B18);
  dword_4878EC = dword_475848;
  qword_4878F0 = qword_47584C;
  return sub_183930(v4);
}
