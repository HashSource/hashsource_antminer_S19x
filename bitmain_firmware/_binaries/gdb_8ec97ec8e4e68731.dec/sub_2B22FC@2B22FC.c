int __fastcall sub_2B22FC(_DWORD *a1)
{
  _BYTE v3[4]; // [sp+Ch] [bp-4h] BYREF

  if ( !dword_48FD0C )
    sub_2B1DB8();
  if ( sub_2A8A04((int)a1, 0, 0) )
    return 0;
  if ( sub_2A87D8((int)v3, 4u, (int)a1) != 4 )
    return 0;
  if ( v3[0] != 37 )
    return 0;
  if ( aCccccccccccccc[v3[1]] == 99 )
    return 0;
  if ( aCccccccccccccc[v3[2]] == 99 )
    return 0;
  if ( aCccccccccccccc[v3[3]] == 99 )
    return 0;
  sub_2B1784((int)a1);
  if ( !sub_2B21E8(a1) )
    return 0;
  else
    return a1[1];
}
