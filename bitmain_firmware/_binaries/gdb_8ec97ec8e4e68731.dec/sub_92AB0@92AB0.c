int __fastcall sub_92AB0(int a1)
{
  if ( dword_475204 )
    return dword_475204 & a1;
  if ( sub_2301F0(dword_4751FC, &dword_475204) )
    sub_946B0("Error reading capability of agent");
  return dword_475204 & a1;
}
