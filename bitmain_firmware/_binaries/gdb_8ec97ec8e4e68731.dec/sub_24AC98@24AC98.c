void __fastcall sub_24AC98(int a1, int a2)
{
  bool v4; // zf

  sub_243C34();
  v4 = dword_48A8D0 == 0;
  if ( dword_48A8D0 )
    v4 = a2 == 0;
  if ( !v4 && !sub_25A3E4("A trace is running already.  Start a new run? ") )
    sub_946E0("New trace run not started.");
  sub_24A878(a1);
}
