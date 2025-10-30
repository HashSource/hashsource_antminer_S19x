int __fastcall sub_1D36D0(int a1, int a2)
{
  int result; // r0

  sub_1D2E50();
  if ( !sub_2326F8(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4) )
    return sub_259858("Already at end of record list.\n");
  if ( !sub_23265C() )
    return sub_259858("The current record target does not support this operation.\n");
  if ( !a2 )
    return sub_2326B4();
  result = sub_25A3E4("Delete the log from this point forward and begin to record the running message at current PC?");
  if ( result )
    return sub_2326B4();
  return result;
}
