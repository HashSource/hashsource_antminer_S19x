int sub_3D240()
{
  dword_487668 = dword_48768C;
  if ( sub_27EB2C() <= 0 && sub_92FA4() == -1 )
    perror("setpgrp failed in child");
  return sub_27E894();
}
