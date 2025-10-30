void sub_FA5A8()
{
  int v0; // r4

  if ( *(_DWORD *)(dword_487D2C + 8) && dword_47ACB8 )
  {
    if ( sub_2AA008() )
    {
      v0 = sub_2A8B88(*(_DWORD *)(dword_487D2C + 8));
      if ( v0 > sub_2A8B88(dword_47ACB8) )
        sub_946B0("exec file is newer than core file.");
    }
    else
    {
      sub_946B0("core file may not match specified executable file.");
    }
  }
}
