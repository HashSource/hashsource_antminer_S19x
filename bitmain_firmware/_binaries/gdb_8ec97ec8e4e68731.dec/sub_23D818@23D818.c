int sub_23D818()
{
  int result; // r0

  if ( dword_4878EC != dword_475848
    || (_DWORD)qword_4878F0 != (_DWORD)qword_47584C
    || (result = HIDWORD(qword_4878F0), HIDWORD(qword_4878F0) != HIDWORD(qword_47584C)) )
  {
    dword_4878EC = dword_475848;
    qword_4878F0 = qword_47584C;
    result = sub_15D778();
    dword_4878F8 = -1;
  }
  return result;
}
