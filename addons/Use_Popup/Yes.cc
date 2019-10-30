
.panels-j1Uci_{
  contain: none;
}

.container-3baos1:last-child{
	position: relative;
	overflow: visible;
}

.container-3baos1:last-child > div:last-child{
	width: 35px;
	height: 32px;
	background-color: transparent!important;
	border-radius: 5px!important;
	margin: 0;
	padding: 0 0 25px 0;
	position: absolute;
	bottom: 14px;
  right: -6px;
	display: flex;
	flex-flow: column;
	align-items: center;
	justify-content: center;
	transition: background-color 200ms;
	z-index: 3;
	box-sizing: border-box;
}

.container-3baos1:last-child:not(:hover) > div:last-child > :nth-child(1){
	opacity: 0;
}

.container-3baos1:last-child:not(:hover) > div:last-child > :nth-child(2){
	opacity: 0;
}

.container-3baos1:last-child:hover > div:last-child:hover{
	height: 95px;
	width: 50px;
	transition: 500ms ease-in-out;
}

.container-3baos1:last-child:hover > div:last-child:before{
	opacity: 0.5;
}

.container-3baos1:last-child > div:last-child > div *{
	left: 0;
	display: none;
}

.container-3baos1:last-child:hover > div:last-child:hover > div *{
	display: block;
}
