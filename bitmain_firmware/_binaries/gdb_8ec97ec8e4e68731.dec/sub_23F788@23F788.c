int sub_23F788()
{
  int result; // r0

  if ( dword_4878EC == dword_475848 && qword_4878F0 == qword_47584C )
    sub_946E0("No thread selected.");
  if ( sub_23DA74(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 2) )
    sub_946E0("The current thread has terminated");
  result = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_23F1FC)(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
  if ( result )
    sub_946E0("Selected thread is running.");
  return result;
}
