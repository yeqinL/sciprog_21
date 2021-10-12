!Module for constant variables

module consts
        integer(kind = 4),parameter::N=12
        real(kind = 4)::pi     
end module consts

!Module with subroutines
module subroutines
        interface
                !degree to radians
                subroutine degtorad(deg,rad)
                        real(kind=4),intent(in)::deg
                        real(kind=4),intent(out)::rad
                end subroutine degtorad
        end interface
end module subroutines


program Trapezoid
        use consts
        use subroutines

        implicit none
        integer(kind = 4)::i
        real(kind = 4)::TanArr(N+1),deg,rad,area,mult_rad
        
        !the value of pi
        pi = atan(1.0)*4.0
        !construct Tan array
        do i=1,N+1
                deg = (i-1)*5.0
                call degtorad(deg,rad)
                TanArr(i) = tan(rad)
                write(6,*)'TanArr[',i,']',TanArr(i)
        end do

        !Apply Trapezodial rule
        call traprule(TanArr,area)

        !Approximated
        write(6,*),'Approximated:',area
        !Real
        write(6,*),'Exact:',log(2.0)
end program


subroutine degtorad(deg,rad)
        use consts
        real(kind=4),intent(in)::deg
        real(kind=4),intent(out)::rad
        rad = (pi*deg)/180.0
end subroutine degtorad

subroutine traprule(TanArr,area)
        use consts
        real(kind = 4), intent(in)::TanArr(N+1)
        real(kind = 4), intent(out)::area
        real(kind = 4)::mult_rad
        area = TanArr(1)+TanArr(N+1)
        do i =2,N,1
                area = area+2.0*TanArr(i)
        end do
        !multiply with (b-a)/2N after converting to radians
        call degtorad((60.0-0.0)/(2.0*N),mult_rad)
        area = mult_rad*area;

end subroutine
