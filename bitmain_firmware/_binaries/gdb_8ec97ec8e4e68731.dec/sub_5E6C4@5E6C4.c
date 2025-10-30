bool __fastcall sub_5E6C4(int a1, int a2)
{
  int v4; // r0

  if ( !a2 )
    return 0;
  if ( a2 == 1 )
    return 1;
  if ( sub_26FF8C() )
    return 1;
  v4 = sub_26FDE0(a1);
  if ( !v4 )
    return 1;
  return (unsigned int)**(unsigned __int8 **)(sub_171258(v4) + 24) - 2 > 2;
}
